
// test/test_sort.c
# include <cutter.h>
# include <card.h>
void
test_cards_sort(void)
{
    Card test_cards[5];
    {
      test_cards[0] = card_new(SPADE,ACE);
      test_cards[1] = card_new(HEART,ACE);
      test_cards[2] = card_new(CLUB,2);
      test_cards[3] = card_new(DIAMOND,10);
      test_cards[4] = card_new(SPADE,2);
    }

    Card expected_cards[5];
    {
      expected_cards[4] = card_new(SPADE,ACE);
      expected_cards[3] = card_new(HEART,ACE);
      expected_cards[2] = card_new(DIAMOND,10);
      expected_cards[1] = card_new(SPADE,2);
      expected_cards[0] = card_new(CLUB,2);
    }

  Card *cards, *sorted_cards;
  {
    cards = test_cards; // 2015.12.08 fixed
    sorted_cards = cards_sort(cards, 5);
  }

  int i;
  for (i=0; i<5; i++)
    {
      cut_assert(card_compare(expected_cards[i], sorted_cards[i])==0 );
    }
}
