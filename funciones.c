
#include "funciones.h"

int sumar(int x, int y)
{
    int resultado;
    resultado=x+y;
    return resultado;
}
/** \brief Suma las variables X e Y devolviendo el resultado
 *
 * \param X primer variable a sumar
 * \param Y segunda variable a sumar
 * \return Devuelve el resultado obtenido
 *
 */

int restar(int x, int y)
{
    int resultado;
    resultado=x-y;
    return resultado;
}
/** \brief Resta las variables X e Y devolviendo el resultado
 *
 * \param X primer variable a restar
 * \param Y segunda variable a restar
 * \return Devuelve el resultado obtenido
 *
 */

int dividir(int x, int y)
{
    int resultado;
    resultado=x/y;
    return resultado;
}
/** \brief Divide las variables X e Y devolviendo el resultado
 *
 * \param X primer variable a dividir
 * \param Y segunda variable a dividir
 * \return Devuelve el resultado obtenido
 *
 */

int multiplicar(int x, int y)
{
    int resultado;
    resultado=x*y;
    return resultado;
}
/** \brief Mulotiplica las variables X e Y devolviendo el resultado
 *
 * \param X primer variable a multiplicar
 * \param Y segunda variable a multiplicar
 * \return Devuelve el resultado obtenido
 *
 */
int factorial(int x)
{
    int resultado;
    if(x==1)
    {
    resultado=1;
    }
    else
    {
    resultado=x*factorial(x-1);
    }
    //resultado=x*(x-1);
    return resultado;
}
/** \brief Factorea las variables X devolviendo el resultado
 *
 * \param X primer variable a factorial
 * \param Y no se ingresa nada
 * \return Devuelve el resultado obtenido
 *
 */
