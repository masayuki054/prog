// test/test_card.c
# include <cutter.h>
# include <card.h>

void
test_card_suit_new_from_string(void)
{
  cut_set_message("文字列からスーツを作成する。");
  cut_assert(card_suit_new_from_string("SPADE")==SPADE);
  cut_assert(card_suit_new_from_string("HEART")==HEART);
  cut_assert(card_suit_new_from_string("DIAMOND")==DIAMOND);
  cut_assert(card_suit_new_from_string("CLUB")==CLUB);
}
