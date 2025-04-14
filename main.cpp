#include <iostream>

using namespace std;

class rectangulo{

    private://atributos
        float largo;
        float ancho;
    public://metodos
        rectangulo(float,float);//constructor
        void perimetro();
        void area();
};

rectangulo::rectangulo(float _largo,float _ancho){
largo=_largo;
ancho=_ancho;
}

void rectangulo::perimetro(){
    float _perimetro= (2*largo)+(2*ancho);

    cout<<"El perimetro del rectangulo es "<<_perimetro<<endl;
}

void rectangulo::area(){
    float _area;

    _area= largo*ancho;

    cout<<"El area del rectangulo es:"<<_area<<endl;

}


int main()
{
    rectangulo r1(11,7);

    r1.perimetro();
    r1.area();

    return 0;
}
