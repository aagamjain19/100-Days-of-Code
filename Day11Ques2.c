#include <stdio.h>

int main() {
    float costPrice, sellingPrice, percentage;

    scanf("%f %f", &costPrice, &sellingPrice);

    if (sellingPrice > costPrice) {
        percentage = ((sellingPrice - costPrice) / costPrice) * 100;
        printf("Profit %.0f%%", percentage);
    } else if (costPrice > sellingPrice) {
        percentage = ((costPrice - sellingPrice) / costPrice) * 100;
        printf("Loss %.0f%%", percentage);
    } else {
        printf("No Profit No Loss");
    }

    return 0;
}