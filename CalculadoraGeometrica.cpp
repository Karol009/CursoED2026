#include <stdio.h>
#include <math.h>

/* Funciones de áreas */

float areaCirculo(float radio){
    return 3.1416 * radio * radio;
}

float areaCuadrado(float lado){
    return lado * lado;
}

/* Funciones de volumen */

float volumenEsfera(float radio){
    return (4.0/3.0) * 3.1416 * radio * radio * radio;
}

float volumenCubo(float lado){
    return lado * lado * lado;
}

/* Funciones de calculadora básica */

float suma(float a, float b){
    return a + b;
}

float resta(float a, float b){
    return a - b;
}

float multiplicacion(float a, float b){
    return a * b;
}

float division(float a, float b){
    if(b != 0){
        return a / b;
    } else {
        printf("Error: Division por cero\n");
        return 0;
    }
}

int main(){

    int opcion;

    printf("Seleccione una opcion:\n");
    printf("1. Calculadora de Geometria\n");
    printf("2. Calculadora Basica\n");
    scanf("%d", &opcion);

    if(opcion == 1){
        float radio, lado;

        printf("Calculadora de Geometria\n");
        printf("------------------------\n");

        printf("Ingrese el radio del circulo y esfera: ");
        scanf("%f", &radio);

        printf("Ingrese el lado del cuadrado y cubo: ");
        scanf("%f", &lado);

        printf("\nResultados:\n");

        printf("Area del circulo: %.2f\n", areaCirculo(radio));
        printf("Area del cuadrado: %.2f\n", areaCuadrado(lado));

        printf("Volumen de la esfera: %.2f\n", volumenEsfera(radio));
        printf("Volumen del cubo: %.2f\n", volumenCubo(lado));
    } else if(opcion == 2){
        float num1, num2, resultado;
        char oper;

        printf("Calculadora Basica\n");
        printf("------------------\n");

        printf("Ingrese primer numero: ");
        scanf("%f", &num1);

        printf("Ingrese operador (+, -, *, /): ");
        scanf(" %c", &oper);

        printf("Ingrese segundo numero: ");
        scanf("%f", &num2);

        switch(oper){
            case '+':
                resultado = suma(num1, num2);
                break;
            case '-':
                resultado = resta(num1, num2);
                break;
            case '*':
                resultado = multiplicacion(num1, num2);
                break;
            case '/':
                resultado = division(num1, num2);
                break;
            default:
                printf("Operador invalido\n");
                return 0;
        }

        printf("Resultado: %.2f\n", resultado);
    } else {
        printf("Opcion invalida\n");
    }

    return 0;
}


/* ----------------------------- */
/* Calculadora Biometrica Basica */
/* ----------------------------- */

double suma(double a, double b){
    return a + b;
}

double resta(double a, double b){
    return a - b;
}

double multiplicacion(double a, double b){
    return a * b;
}

double division(double a, double b){
    return a / b;
}

int calculadora(){

    double num1, num2;
    int opcion;

    printf("\nCalculadora Biometrica\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");

    printf("Elija una opcion: ");
    scanf("%d", &opcion);

    printf("Ingrese dos numeros:\n");
    scanf("%lf %lf", &num1, &num2);

    if(opcion == 1)
        printf("Resultado: %.2lf\n", suma(num1,num2));
    else if(opcion == 2)
        printf("Resultado: %.2lf\n", resta(num1,num2));
    else if(opcion == 3)
        printf("Resultado: %.2lf\n", multiplicacion(num1,num2));
    else if(opcion == 4)
        printf("Resultado: %.2lf\n", division(num1,num2));
    else
        printf("Opcion incorrecta\n");

    return 0;
}
