#include <stdio.h>
#include <string.h>

struct stock_s {
   char ticker[MAX_TICKER];
   float price;
   char name[MAX_NAME];
};

struct portfolio_s {
   char ticker[MAX_TICKER];
   int quantity;
};

float CalculatePortfolioValue(struct stock_s *stocks, int number_of_stocks, struct portfolio_s *my_portfolio, int number_of_stocks_in_my_portfolio) {
   int total = 0;
   for (int i = 0; i < number_of_stocks; i++) {
      for (int j = 0; j < number_of_stocks_in_my_portfolio; j++) {
         if (strcmp(stocks[i].ticker, my_portfolio[j].ticker) == 0) {
            total += (stocks[i].price * my_portfolio[j].quantity);
         }
      }
   }
   return total;
}
