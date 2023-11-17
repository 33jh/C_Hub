#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // ��������Windowsƽ̨�����ʹ������ƽ̨���뿼��ʹ����Ӧ�Ŀ�

// ������Ϸ����Ĵ�С
#define WIDTH 30
#define HEIGHT 10

// ������ҽṹ��
typedef struct {
    int x, y;
    int isJumping;
    int jumpHeight;
} Player;

// ������Ϸ��ͼ
char gameMap[HEIGHT][WIDTH];

// ��ʼ����Ϸ��ͼ
void initGameMap() {
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            gameMap[i][j] = ' ';
        }
    }
}

// ������Ϸ��ͼ
void drawGameMap() {
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            printf("%c", gameMap[i][j]);
        }
        printf("\n");
    }
}

// �����Ļ
void clearScreen() {
    system("cls"); // ��������Windowsƽ̨�����ʹ������ƽ̨���뿼��ʹ����Ӧ����������
}

// �������
void drawPlayer(Player player) {
    gameMap[player.y][player.x] = 'P';
}

// �������λ��
void updatePlayer(Player* player) {
    if (player->isJumping) {
        if (player->jumpHeight > 0) {
            player->y--;
            player->jumpHeight--;
        }
        else {
            player->isJumping = 0;
        }
    }
    else {
        if (player->y < HEIGHT - 1) {
            player->y++;
        }
    }
}

int main() {
    Player player = { 5, HEIGHT - 1, 0, 0 };
    initGameMap();

    char input;
    int frame = 0;

    while (1) {
        if (_kbhit()) {
            input = _getch();
            if (input == ' ' && !player.isJumping) {
                player.isJumping = 1;
                player.jumpHeight = 3; // ������Ծ�߶�
            }
        }

        updatePlayer(&player);
        clearScreen();
        drawPlayer(player);
        drawGameMap();

        // ÿ֡���ӳ�ʱ�䣬���Ե����Կ�����Ϸ�ٶ�
        for (int i = 0; i < 500000; i++);

        frame++;
    }

    return 0;
}
