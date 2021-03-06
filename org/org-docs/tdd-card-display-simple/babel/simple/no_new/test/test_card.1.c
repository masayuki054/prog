
// test/test_card.c
# include <cutter.h>
# include <card.h>

enum e_No {JACK=11, QUEEN, KING, ACE};
enum e_No card_no_new_from_string(char *);

void
test_card_suit_new_from_string(void)
{
  cut_set_message("スーツから数値への変換のテスト");
  cut_assert_true(card_suit_new_from_string("SPADE")==SPADE);
  cut_assert(card_suit_new_from_string("HEART")==HEART);
  cut_assert(card_suit_new_from_string("DIAMOND")==DIAMOND);
  cut_assert(card_suit_new_from_string("CLUB")==CLUB);
}

void
test_card_no_new_from_string(void)
{
  cut_set_message("番号から数値への変換のテスト");
  cut_assert(card_no_new_from_string("1")==ACE);
  cut_assert(card_no_new_from_string("13")==KING);
  cut_assert(card_no_new_from_string("12")==QUEEN);
  cut_assert(card_no_new_from_string("11")==JACK);
  cut_assert(card_no_new_from_string("10")==10);
}
