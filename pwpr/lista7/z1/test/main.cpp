#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>

    const int N=15;
    int szerokosc=800;
    int wysokosc=600;
    int promien=100;
    int keyonoff=1;
    float g=0.000005;
    int R[N];
    int G[N];
    int B[N];
    float x=(szerokosc/2)-promien;
    float y=(wysokosc/2)-promien;
    int d=2*promien;
    float vx=0.08;
    float vy=0.05;
    float dx[N];

    float dy[N];
    int np[N];
    //float pr[N];
    //const float maxY=50.f;
    //const sf::Vector2f gravity(0,g);
    //sf::Vector2f velocity(vx, vy);
    sf::CircleShape kolka[N];


    void init()
    {
        for(int i=0;i<N;i++)
        {
          //  for(int t=1;t<=N;t++){
            np[i]=promien*(rand()/(float)RAND_MAX);

            dx[i]=vx*(rand()/(float)RAND_MAX);//*g*t;
            dy[i]=vy*(rand()/(float)RAND_MAX);//*g*t;
            kolka[i] =sf::CircleShape(np[i]);
            kolka[i].setPosition(x+x*(rand()/(float)RAND_MAX),y+y*(rand()/(float)RAND_MAX));
            R[i]=200*(rand()/(float)RAND_MAX);
            G[i]=20*(rand()/(float)RAND_MAX);
            B[i]=200*(rand()/(float)RAND_MAX);
            kolka[i].setFillColor(sf::Color(R[i],B[i],G[i]));
           // pr[i]=1/i;
          //  }
        }
    }

void przesun(float &Px, float &Py,sf::CircleShape &przes,int nb,
int &R, int &G, int &B)
{
        int py=Py;
        //Py=Py+vx*prs;
        //std::cout<<przes.getPosition().x<<std::endl;
        int l= przes.getPosition().x;
        int k= przes.getPosition().y;
        if (l+(2*nb)==szerokosc || l == 0)
                      Px=Px*(-1); // juz jest wszystko tak

        if (k+(2*nb)==wysokosc || k == 0)
                      Py=Py*(-1);
        else Py=Py+g;
        if (Py>0.9) Py=0.01;
        R=20*Py;
        G=200*Py;
        B=200*Py;
           // if py>Py }
        //keypressed?else Py=Py+0.001;
        //else
        //std::cout<<Py<<std::endl;
        //while(true){
            przes.move(Px,Py);
            //if(k<=400)Py =- ;
                //}
}

int main()
{

    init();

    sf::RenderWindow window(sf::VideoMode(szerokosc,wysokosc),"okno");

    //sf::CircleShape shape(promien);

    //shape.setFillColor(sf::Color::Black);//koloruje kolo
    //shape.setPosition(x,y);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if(event.key.code == sf::Keyboard::Escape)
                window.close();
            if(event.type == sf::Event::KeyPressed)
                keyonoff=1-keyonoff;

        }
        for(int i=0;i<N;i++)
            przesun(dx[i],dy[i],kolka[i],np[i],R[i],G[i],B[i]);

        window.clear(sf::Color::Red);
        if(keyonoff)
        {
            for(int i=0;i<N;i++)
            {
                window.draw(kolka[i]);
            }
        }
        window.display();
    }
    return 0;
}
