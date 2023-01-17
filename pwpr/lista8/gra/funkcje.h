void logika()
{
    if(ka==1)
    {
        if(pilka.getPosition().x>0)
        {
            pilka.move(-5,0);
        }
    }
    if(kd==1)
    {
        if(pilka.getPosition().x<800)
        {
            pilka.move(5,0);
        }
    }
    if(pilka.getPosition().x>przeszkoda.getPosition().x-50 && pilka.getPosition().x<przeszkoda.getPosition().x+50 && pilka.getPosition().y>przeszkoda.getPosition().y-50 && pilka.getPosition().y<przeszkoda.getPosition().y+50)
    {
        std::cout<<"przegrales"<<std::endl;
        window.close();
    }
}
void menu()
{
//wyswietlanie menu gry z wyborami play, exit, options
window.clear(sf::Color::Black);
sf::Font font;
if (!font.loadFromFile("arial.ttf"))
    std::cout<<"blad"<<std::endl;

}
