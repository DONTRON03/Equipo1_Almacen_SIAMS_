#include <windows.h>
#include <string>
#include <vector>
#include <sstream>

const int MAX = 100;

class Producto {
public:
    int id;
    std::string nombre;
    int cantidad;
    double precio;

    Producto(int id, const std::string& nombre, int cantidad, double precio)
        : id(id), nombre(nombre), cantidad(cantidad), precio(precio) {}
};

class Almacen {
private:
    std::vector<Producto> productos;
    int siguienteId;

public:
    Almacen() : siguienteId(1) {}

    void agregarProducto(const std::string& nombre, int cantidad, double precio) {
        productos.emplace_back(siguienteId++, nombre, cantidad, precio);
    }

    std::string mostrarProductos() const {
        std::ostringstream oss;
        for (const auto& producto : productos) {
            oss << "ID: " << producto.id << ", Nombre: " << producto.nombre
                << ", Cantidad: " << producto.cantidad << ", Precio: $" << producto.precio << "\n";
        }
        return oss.str();
    }
};

Almacen almacen;

// Identificadores de los controles
#define ID_BTN_ADD 1
#define ID_BTN_SHOW 2
#define ID_BTN_EXIT 3
#define ID_EDIT_NAME 101
#define ID_EDIT_QTY 102
#define ID_EDIT_PRICE 103

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    static HWND hEditName, hEditQty, hEditPrice, hOutput;
    char buffer[256];

    switch (uMsg) {
        case WM_CREATE: {
            // Crear controles
            CreateWindow("STATIC", "Nombre:", WS_VISIBLE | WS_CHILD, 10, 10, 80, 20, hwnd, NULL, NULL, NULL);
            hEditName = CreateWindow("EDIT", "", WS_VISIBLE | WS_CHILD | WS_BORDER, 100, 10, 200, 20, hwnd, (HMENU)ID_EDIT_NAME, NULL, NULL);

            CreateWindow("STATIC", "Cantidad:", WS_VISIBLE | WS_CHILD, 10, 40, 80, 20, hwnd, NULL, NULL, NULL);
            hEditQty = CreateWindow("EDIT", "", WS_VISIBLE | WS_CHILD | WS_BORDER, 100, 40, 200, 20, hwnd, (HMENU)ID_EDIT_QTY, NULL, NULL);

            CreateWindow("STATIC", "Precio:", WS_VISIBLE | WS_CHILD, 10, 70, 80, 20, hwnd, NULL, NULL, NULL);
            hEditPrice = CreateWindow("EDIT", "", WS_VISIBLE | WS_CHILD | WS_BORDER, 100, 70, 200, 20, hwnd, (HMENU)ID_EDIT_PRICE, NULL, NULL);

            CreateWindow("BUTTON", "Agregar Producto", WS_VISIBLE | WS_CHILD, 10, 100, 150, 30, hwnd, (HMENU)ID_BTN_ADD, NULL, NULL);
            CreateWindow("BUTTON", "Mostrar Almacen", WS_VISIBLE | WS_CHILD, 170, 100, 150, 30, hwnd, (HMENU)ID_BTN_SHOW, NULL, NULL);
            CreateWindow("BUTTON", "Salir", WS_VISIBLE | WS_CHILD, 330, 100, 150, 30, hwnd, (HMENU)ID_BTN_EXIT, NULL, NULL);

            hOutput = CreateWindow("EDIT", "", WS_VISIBLE | WS_CHILD | WS_BORDER | ES_MULTILINE | ES_AUTOVSCROLL | ES_READONLY, 10, 140, 470, 200, hwnd, NULL, NULL, NULL);
            break;
        }
        case WM_COMMAND: {
            if (LOWORD(wParam) == ID_BTN_ADD) {
                // Agregar producto
                GetWindowText(hEditName, buffer, 256);
                std::string nombre = buffer;

                GetWindowText(hEditQty, buffer, 256);
                int cantidad = std::stoi(buffer);

                GetWindowText(hEditPrice, buffer, 256);
                double precio = std::stod(buffer);

                almacen.agregarProducto(nombre, cantidad, precio);
                MessageBox(hwnd, "Producto agregado exitosamente.", "Información", MB_OK);
            } else if (LOWORD(wParam) == ID_BTN_SHOW) {
                // Mostrar productos
                std::string productos = almacen.mostrarProductos();
                SetWindowText(hOutput, productos.c_str());
            } else if (LOWORD(wParam) == ID_BTN_EXIT) {
                PostQuitMessage(0);
            }
            break;
        }
        case WM_DESTROY:
            PostQuitMessage(0);
            break;
        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
    return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    const char CLASS_NAME[] = "Almacen SIAMS";

    WNDCLASS wc = {};
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASS_NAME;
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);

    RegisterClass(&wc);

    HWND hwnd = CreateWindowEx(
        0,                              // Optional window styles.
        CLASS_NAME,                     // Window class
        "Almacen SIAMS",     // Window text
        WS_OVERLAPPEDWINDOW,            // Window style
        CW_USEDEFAULT, CW_USEDEFAULT, 500, 400, // Size and position
        NULL,                           // Parent window
        NULL,                           // Menu
        hInstance,                      // Instance handle
        NULL                            // Additional application data
    );

    if (hwnd == NULL) {
        return 0;
    }

    ShowWindow(hwnd, nCmdShow);

    MSG msg = {};
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}
