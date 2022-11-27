class Tennis
{
public:
	Tennis(){
		player1Score = 0;
		player2Score = 0;
	}; 
	~Tennis(){}; 
	void addPlayer1Score(int score) {
		player1Score += score;
	};
	void addPlayer2Score(int score) {
		player2Score += score;
	};
	std::string output();
private:
	int player1Score;
	int player2Score;
};