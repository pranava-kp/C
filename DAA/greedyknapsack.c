#include <stdio.h>
#define MAX_ITEMS 100
#define INF 999999

typedef struct
{
    int value;
    int weight;
    float ratio;
} Item;

void swap(Item* a, Item* b)
{
    Item temp = *a;
    *a = *b;
    *b = temp;
}

void sortItemsByRatio(Item items[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (items[j].ratio < items[j + 1].ratio)
                swap(&items[j], &items[j + 1]);
}

int knapsackDiscrete(int W, Item items[], int n)
{
    int currentWeight = 0;
    int totalValue = 0;
    for (int i = 0; i < n; i++)
        if (currentWeight + items[i].weight <= W)
        {
            currentWeight += items[i].weight;
            totalValue += items[i].value;
        }
    return totalValue;
}

float knapsackContinuous(int W, Item items[], int n)
{
    int currentWeight = 0;
    float totalValue = 0.0;
    for (int i = 0; i < n; i++)
        if (currentWeight + items[i].weight <= W)
        {
            currentWeight += items[i].weight;
            totalValue += items[i].value;
        }
        else
        {
            int remain = W - currentWeight;
            totalValue += items[i].value * ((float) remain / items[i].weight);
            break;
        }
    return totalValue;
}

int main()
{
    int n, W, choice;
    Item items[MAX_ITEMS];
    printf("Enter the number of items: ");
    scanf("%d", &n);
    printf("Enter the weight of the knapsack: ");
    scanf("%d", &W);
    for (int i = 0; i < n; i++)
    {
        printf("Enter value and weight for item %d: ", i + 1);
        scanf("%d %d", &items[i].value, &items[i].weight);
        items[i].ratio = (float) items[i].value / items[i].weight;
    }
    sortItemsByRatio(items, n);
    int maxValue1 = knapsackDiscrete(W, items, n);
    printf("Maximum value in discrete knapsack = %d\n", maxValue1);
    float maxValue2 = knapsackContinuous(W, items, n);
        printf("Maximum value in continuous knapsack = %f\n", maxValue2);
    return 0;
}
