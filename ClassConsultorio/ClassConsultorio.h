#pragma once

using namespace System;

namespace ClassConsultorio {
    public ref class Class1
    {
    public:
        String^ nombre;
        int edad;
        String^ genero;
        String^ correo;
        int precio;
        String^ cancelado;

        // Constructor corregido
        Class1(String^ nombre, int edad, String^ genero, String^ correo, int precio, String^ cancelado)
        {
            this->nombre = nombre;
            this->edad = edad;
            this->genero = genero;
            this->correo = correo;
            this->precio = precio;
            this->cancelado = cancelado;
        }

        virtual String^ ToString() override
        {
            return "Nombre: " + nombre + ", Edad: " + edad + ", Género: " + genero + ", Correo: " + correo + ", Precio: " + precio + ", Cancelado: " + cancelado;
        }

        // Métodos getter y setter
        void setNombre(String^ nombre) { this->nombre = nombre; }
        String^ getNombre() { return nombre; }

        void setGenero(String^ genero) { this->genero = genero; }
        String^ getGenero() { return genero; }

        void setCorreo(String^ correo) { this->correo = correo; }
        String^ getCorreo() { return correo; }

        void setEdad(int edad) { this->edad = edad; }
        int getEdad() { return edad; }

        void setCosto(int precio) { this->precio = precio; }
        int getCosto() { return precio; }

        void setCancelado(String^ cancelado) { this->cancelado = cancelado; }
        String^ getCancelado() { return cancelado; }
    };
}