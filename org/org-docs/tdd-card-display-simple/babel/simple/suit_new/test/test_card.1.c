
// test/test_card.c
# include <cutter.h>

enum e_Suit {CLUB=1, DIAMOND, HEART, SPADE};

enum e_Suit card_suit_new_from_string(char *);

void
test_card_suit_new_from_string(void)
{
  cut_set_message("文字列からスーツを作成する。");
  cut_assert_true(card_suit_new_from_string("SPADE")==SPADE);
}
