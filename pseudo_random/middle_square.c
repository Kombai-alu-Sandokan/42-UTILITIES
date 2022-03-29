/* 
 * Simple implementation of midle square method for
 * generating pseudorandom number in a range [0..n].
 *
 * Simply call ft_rand_range(int min, int max)
 * 		 ! max-min must be < 100000 !
 *
 * You can change the initial seed by setting next
 * to another 4 digit number excluding these :
 * 0000, 0100, 0504, 5030, 3009, 2500, 3792, 7600,
 * 2916 but 3251 is a pretty good seed.
 *
 * After a certain of repetition the generator get 
 * stuck and output only zeroes or a repetitive
 * sequence.
 */

int	ft_rand(void)
{
	static int	next = 3251;

	next = ((next * next) / 100) % 10000;
	return (next);
}

int	ft_rand_range(int min, int max)
{
	return (ft_rand() % (max + 1 - min) + min);
}
