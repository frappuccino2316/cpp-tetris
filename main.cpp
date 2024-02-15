#include <iostream>
#include <cstdlib> // For system("cls") on Windows, or system("clear") on Unix-like systems
#include <unistd.h> // For usleep() on Unix-like systems

int main() {
    // 無限ループ
    while (true) {
        // 画面をクリア
        // Windowsではsystem("cls")、Unix/Linux/macOSではsystem("clear")を使用します
        system("clear"); // Windows
        //system("clear"); // Unix-like systems

        // ここに画面に表示したい情報を書きます
        std::cout << "テトリスっぽいゲーム\n";
        std::cout << "================\n";
        std::cout << "ここにゲームの状態や情報を表示します。\n";

        // 少し待機する
        // ゲームの速度やフレームレートに応じて調整します
        // WindowsではSleep()、Unix/Linux/macOSではusleep()を使用します
        // ここではWindowsのSleep()を使用します
        // Sleep(1000); // 1000ミリ秒 = 1秒待機
        usleep(1000000);
    }

    return 0;
}