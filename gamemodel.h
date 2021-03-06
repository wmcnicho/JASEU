class Game {
public:
    Game();
    ~Game();

    void go();
    void addLife();
    void updateScore(int s);
    void removeLife();
    bool gameOver();
    bool start();
    void useContinue();
    void levelUp();
    
    int getScore();
    int getLives();
    int getCont();
    double getRate();
	    
    
    
    void reset();

private:

    int level;
    bool started;
    bool end;
    int continuesRemaining;
    int lives;
    int score;
    double scoreRate;
    int newLife;
};
