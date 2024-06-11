#include <windows.h>

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
void agregarProducto() {
    MessageBox(NULL, "Aquí puedes agregar un producto.", "Agregar", MB_OK);
}

void eliminarProducto() {
    MessageBox(NULL, "Aquí puedes eliminar un producto.", "Eliminar", MB_OK);
}

void verInventario() {
    MessageBox(NULL, "Aquí puedes ver el inventario.", "Inventario", MB_OK);
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    const char CLASS_NAME[] = "AlmacenWindowClass";

    WNDCLASS wc = { };

    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASS_NAME;

    RegisterClass(&wc);

    HWND hwnd = CreateWindowEx(
        0,
        CLASS_NAME,
        "Almacen SIAMS",
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, 1000, 500,
        NULL,
        NULL,
        hInstance,
        NULL
    );

    if (hwnd == NULL) {
        return 0;
    }

    ShowWindow(hwnd, nCmdShow);
    MSG msg = { };
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    static HWND buttonAgregar, buttonEliminar, buttonInventario, buttonSalir;

    switch (uMsg) {
    case WM_CREATE:
        buttonAgregar = CreateWindow(
            "BUTTON", "Agregar producto",
            WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
            10, 10, 150, 30,
            hwnd, (HMENU)1,
            (HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), NULL);

        buttonEliminar = CreateWindow(
            "BUTTON", "Eliminar producto",
            WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
            10, 50, 150, 30,
            hwnd, (HMENU)2,
            (HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), NULL);

        buttonInventario = CreateWindow(
            "BUTTON", "Ver inventario",
            WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
            10, 90, 150, 30,
            hwnd, (HMENU)3,
            (HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), NULL);

        buttonSalir = CreateWindow(
            "BUTTON", "Salir",
            WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
            10, 130, 150, 30,
            hwnd, (HMENU)4,
            (HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), NULL);
        break;

    case WM_COMMAND:
        switch (LOWORD(wParam)) {
        case 1:
            agregarProducto();
            break;
        case 2:
            eliminarProducto();
            break;
        case 3:
            verInventario();
            break;
        case 4:
            PostQuitMessage(0);
            break;
        }
        break;

    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;

    default:
        return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
    return 0;
}
