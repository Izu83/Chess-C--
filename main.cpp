#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

std::string board[8][8] = {"BR", "BN", "BB", "BQ", "BK", "BB", "BN", "BR",
                           "BP", "BP", "BP", "BP", "BP", "BP", "BP", "BP",
                           "  ", "  ", "  ", "  ", "  ", "  ","  ", "  ",
                           "  ", "  ", "  ", "  ", "  ", "  ","  ", "  ",
                           "  ", "  ", "  ", "  ", "  ", "  ","  ", "  ",
                           "  ", "  ", "  ", "  ", "  ", "  ","  ", "  ",
                           "WP", "WP", "WP", "WP", "WP", "WP", "WP", "WP",
                           "WR", "WN", "WB", "WQ", "WK", "WB", "WN", "WR"};

void show_board()
{
    std::cout << "---------------------------------------\n";
    for(int i = 0; i < 8; i++)
    {
        for(size_t j = 0; j < 8; j++)
        {
            std::cout << board[i][j] << std::setw(2) << std::left << " | ";
        }
        std::cout << std::endl;
        std::cout << "---------------------------------------\n";
    }
}

int main()
{
    
}