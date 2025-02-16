/**Este Procedimiento Recibe como Parametro la Direccion en Memoria de 2 Variables para Modificar sus Valores**/

void assignMinMax (int iNum1, int iNum2, int *iMax, int *iMin)
{
    *iMax = iNum1;
    *iMin = iNum2;
    if (iNum1 < iNum2)
    {
        *iMin = iNum1;
        *iMax = iNum2;
    }
}

