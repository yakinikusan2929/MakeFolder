#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int numFolders; // 作成するフォルダの数
    char baseName[50]; // ベースとなるフォルダ名
    char folderName[50]; // 完成したフォルダ名

    // フォルダの数とベースとなるフォルダ名の入力
    printf("作成するフォルダの数を入力してください: ");
    scanf("%d", &numFolders);
    printf("ベースとなるフォルダ名を入力してください: ");
    scanf("%s", baseName);

    // フォルダを作成するループ
    for (int i = 1; i <= numFolders; i++) {
        // フォルダ名を作成
        sprintf(folderName, "%s%02d", baseName, i);

        // フォルダを作成
        if (mkdir(folderName) == 0) {
            printf("フォルダ %s を作成しました。\n", folderName);
        } else {
            printf("フォルダ %s の作成に失敗しました。\n", folderName);
        }
    }

    return 0;
}