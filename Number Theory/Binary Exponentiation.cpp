ll binPow(ll x, ll n)
{
	ll p = 1;
	while (n)
	{
		if (n & 1)
		{
			p = p * x;
			n--;
		}
		x = x * x;
		n /= 2;
	}
	return p;
}
