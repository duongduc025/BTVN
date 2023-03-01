#include <bits/stdc++.h>

using namespace std;


int m,n,k;
int x,y;
int turn = 0;

void input()
{
    cin >> m >> n >> k;
}

char in[500][500];
int out[500][500];
bool ck[500][500];

void randommap()
{
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            in[i][j] = '.';

    int bomb = 0;
    int should_add = 0;
    while( bomb < k || should_add == 0)
    {
        should_add = 1;
        srand(time(NULL));
        int i = rand()% m;
        int j = rand()% n;
        if(in[i][j] == '*')
            should_add = 0;
        else
        {
            in[i][j] = '*';
            bomb++;
            should_add = 1;
        }
    }
}
void setupmap()
{
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            ck[x][y] = 0;
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
        {
            if(in[i][j] == '*') out[i][j] = -1;
            else out[i][j] += (in[i-1][j-1] == '*') +(in[i-1][j] == '*') +(in[i-1][j+1] == '*') +(in[i][j-1] == '*') +(in[i][j+1] == '*') +(in[i+1][j-1] == '*') +(in[i+1][j+1] == '*') +(in[i+1][j] == '*');
        }
}
void play()
{
    cin >> x >> y;
    x--; y--;
    ck[x][y] = 1;
    turn ++;
}
void output()
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(out[i][j] == -1 && ck[i][j] == 1) cout << '*' << " ";
            else if(ck[i][j] == 1) cout << out[i][j] << " ";
            else cout << '-' << " ";
        }
        cout << endl;
    }
    cout << "------" << endl;
}

int main()
{
    bool game = true;

    input();
    randommap();
    setupmap();

    while(game)
    {
        play();
        output();
       if(out[x][y] == -1)
       {
           cout << "YOU ARE DEAD";
           return 0;
       }
       if(turn == (m*n-k))
       {
           cout << "YOU WIN";
           return 0;
       }
    }
}
