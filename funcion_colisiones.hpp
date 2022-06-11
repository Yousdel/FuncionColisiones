#ifndef FUNCION_COLISIONES_H
#define FUNCION_COLISIONES_H



#define VER_LAS_Y \
    if (y1 >= miy1 && y2 >= miy2 ) /*ver si esta hacia abajo*/ \
        return 1; \
    if (y1 <= miy1 && y2 <= miy2)  /*ver si esta hacia arriba*/ \
        return 1;

bool hay_colision(const int x_sujeto, const int y_sujeto,
                          const int alto_sujeto, const int ancho_sujeto)
{
  //estas son las coordenadas x1,y1 y x2,y2 que corresponden al marco del objeto que pueda chocar con el nuestro-----------
    int x1=x_sujeto, x2=x_sujeto+ancho_sujeto,
            y1= y_sujeto, y2 = y_sujeto+alto_sujeto,
  //y estas son las coordenadas mix1,miy1 y mix2,miy2 de nuestro objeto----------------------------------------------------
            mix1=m_x, mix2=m_x+m_ancho,
            miy1=m_y, miy2=m_y+m_alto;


    if (x1 <= mix1 && x2 >= mix1){   //si esta hacia la izquierda
        VER_LAS_Y
    }
    if (x1 >= mix1 && x2 <= mix1){      //si esta hacia la derecha
        VER_LAS_Y
    }
  return 0;
}

#endif FUNCION_COLISIONES_H
