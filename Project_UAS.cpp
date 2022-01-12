/*
	Aplikasi Game "TIC TAC TOE" denngan c++
	Deskripsi :
	Programmed by Inggi Maulani
	Kelas 1B
	Jurusan Teknik Informatika
	Universitas Muhammadiyah Sukabumi
	Matakuliah Dasar Pemograman
*/
	

#include <iostream>

using namespace std;

char matrix[3][3] = {'1','2','3','4','5','6','7','8','9'};
char player = 'x';
int n;

void Draw(){
	cout << "Tic Tac Toe"  << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[i][j] << " "; 
		}
		cout << endl;
	}
}

void input(){
	int a;
	string danger = "The field is alreadybuse, try another";
	cout << "It's " << player << "Turn!,  " << "Press the number of the field:";
	cin >> a;
	
	if (a == 1)
	{
		if (matrix[0][0] = '1')
		{
			matrix[0][0] = player;
		}
		else
		{
			cout << danger << endl;
			input();
		}
	} else if (a == 2)
	{
		if (matrix[0][1] = '2')
		{
			matrix[0][1] = player;
		}
		else
		{
			cout << danger << endl;
			input();
		}
	} else if (a == 3)
	{
		if (matrix[0][2] = '3')
		{
			matrix[0][2] = player;
		}
		else
		{
			cout << danger << endl;
			input();
		}
	} else if (a == 4)
	{
		if (matrix[1][0] = '4')
		{
			matrix[1][0] = player;
		}
		else
		{
			cout << danger << endl;
			input();
		}
	} else if (a == 5)
	{
		if (matrix[1][1] = '5')
		{
			matrix[1][1] = player;
		}
		else
		{
			cout << danger << endl;
			input();
		}
	} else if (a == 6)
	{
		if (matrix[1][2] = '6')
		{
			matrix[1][2] = player;
		}
		else
		{
			cout << danger << endl;
			input();
		}
	} else if (a == 7)
	{
		if (matrix[2][0] = '7')
		{
			matrix[2][0] = player;
		}
		else
		{
			cout << danger << endl;
			input();
		}
	} else if (a == 8)
	{
		if (matrix[2][1] = '8')
		{
			matrix[2][1] = player;
		}
		else
		{
			cout << danger << endl;
			input();
		}
	} else if (a == 9)
	{
		if (matrix[2][2] = '9')
		{
			matrix[2][2] = player;
		}
		else
		{
			cout << danger << endl;
			input();
		}
	} else {
		cout << "Input again!" << endl;
		input();
	}
}

void togglePlayer(){
	if (player == 'x')
	{
		player = 'o';
	} else{
		player = 'x';
	}
}

char win(){
	if (matrix[0][0] == 'x' && matrix[0][1] == 'x' && matrix[0][2] == 'x')
	{
		return 'x';	
	} 
	else if (matrix[1][0] == 'x' && matrix[1][1] == 'x' && matrix[1][2] == 'x')
	{
		return 'x';	
	} 
	else if (matrix[2][0] == 'x' && matrix[2][1] == 'x' && matrix[2][2] == 'x')
	{
		return 'x';	
	} 
	//kolom
	else if (matrix[0][0] == 'x' && matrix[1][0] == 'x' && matrix[2][0] == 'x')
	{
		return 'x';	
	} 
	else if (matrix[0][1] == 'x' && matrix[1][1] == 'x' && matrix[2][1] == 'x')
	{
		return 'x';	
	} 
	else if (matrix[0][2] == 'x' && matrix[1][2] == 'x' && matrix[2][2] == 'x')
	{
		return 'x';	
	} 
	//diagonal
	else if (matrix[0][0] == 'x' && matrix[1][1] == 'x' && matrix[2][2] == 'x')
	{
		return 'x';	
	} 
	else if (matrix[2][0] == 'x' && matrix[1][1] == 'x' && matrix[0][2] == 'x')
	{
		return 'x';	
	} 
	//player o
	//baris
	else if (matrix[0][0] == 'o' && matrix[0][1] == 'o' && matrix[0][2] == 'o')
	{
		return 'o';	
	} 
	else if (matrix[1][0] == 'o' && matrix[1][1] == 'o' && matrix[1][2] == 'o')
	{
		return 'o';	
	} 
	else if (matrix[2][0] == 'o' && matrix[2][1] == 'o' && matrix[2][2] == 'o')
	{
		return 'o';	
	} 
	//kolom
	else if (matrix[0][0] == 'o' && matrix[1][0] == 'o' && matrix[2][0] == 'o')
	{
		return 'o';	
	} 
	else if (matrix[0][1] == 'o' && matrix[1][1] == 'o' && matrix[2][1] == 'o')
	{
		return 'o';	
	} 
	else if (matrix[0][2] == 'o' && matrix[1][2] == 'o' && matrix[2][2] == 'o')
	{
		return 'o';	
	} 
	//diagonal
	else if (matrix[0][0] == 'o' && matrix[1][1] == 'o' && matrix[2][2] == 'o')
	{
		return 'o';	
	} 
	else if (matrix[2][0] == 'o' && matrix[1][1] == 'o' && matrix[0][2] == 'o')
	{
		return 'o';	
	} 
	else {
		return '/';
	}
	
	
	 
}

int main(){
	Draw();
	while(1)
	{
		n++;
		input();
		Draw();
		if (win() == 'x')
		{
			cout << "x Player Win!" << endl;
			break;
		} else if (win() == 'o')
		{
			cout << "o Player Win!" << endl;
			break;
		} else if (win() == '/' && n == 9)
		{
			cout << "It's Draw!" << endl;
			break;
		}
		togglePlayer();
	}
	system("pause");
}
