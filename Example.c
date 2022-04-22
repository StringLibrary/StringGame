/*
* Este es un pequeño codigo para mover un caracter a izquierda a derecha
*/
#include "stringgame.h"

Public KEY;//Tecla para mover el caracter
let posPlayerX = 0;//posicion del caracter en X
let posPlayerY = 20;//posicion del caracter en Y
//prototipo de las funciones
func block (void);
func player (void);
func plataforma (void);
func moveKey(void);
func pintar(void);
//funcion principal
int main (){
    
    StrSetTitle("Example1.0.0");//funcion para ponerle un nombre a la consla
    StrOcultaCursor(true);//funcion para ocultar el cursor "true/True para ocultarlo y false/False para mostrarlo"
    
    while(true){
        string_clrscr();
        pintar();
        moveKey();
    }
    
    return 0;
}
//funcion para pintar un bloque
func block (void){
    printf("[#]");
}
//funcion para pintar el caracter a mover
func player (void){
    printf("@");
}
//funcion para pintar la plataforma
func plataforma (void){
    int ini;
    for(ini = 0; ini < 10; ini++){
        block();
    }
}
//funcion para mover el caracter
func moveKey(void){
    
    KEY = StrReadKey();
    //movimiento
    if(KEY == Ax01)
        posPlayerX--;
    if(KEY == Ax04)
        posPlayerX++;
    //limites
    if(posPlayerX == -1)
        posPlayerX++;
    if(posPlayerX == 30)
        posPlayerX--;
    
}
//funcion para pintar todo
func pintar(void){
    
    StrGotoXY(posPlayerX , posPlayerY);
    player();
    StrGotoXY(0 , 21);
    plataforma();
    
}
