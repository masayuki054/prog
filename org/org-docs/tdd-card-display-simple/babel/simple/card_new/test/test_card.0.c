
// test/test_card.c
# include <cutter.h>
# include <card.h>

void
test_card_suit_new_from_string(void)
{
  cut_set_message("文字列からスーツを作成する。");
  cut_assert_true(card_suit_new_from_string("SPADE")==SPADE);
  cut_assert_true(card_suit_new_from_string("HEART")==HEART);
  cut_assert_true(card_suit_new_from_string("DIAMOND")==DIAMOND);
  cut_assert_true(card_suit_new_from_string("CLUB")==CLUB);
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

struct _Card {
  enum e_Suit suit;
  enum e_No no;
};

typedef struct _Card Card;

enum e_Suit card_suit(Card);
enum e_No card_no(Card);
Card card_new(enum e_Suit, enum e_No);

void
test_card_new(void)
{
   cut_set_message("スーツと番号からカードを作成");
  {
    Card sa = card_new(SPADE,ACE);
    cut_assert(card_suit(sa)==SPADE);
    cut_assert(card_no(sa)==ACE);
  }
}
