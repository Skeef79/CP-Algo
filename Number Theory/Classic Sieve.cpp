const int N = 10000000;
int used[N + 1];
vector<int> pr;

void Sieve()
{
	pr.reserve(N / 10);
	for (ll i = 2; i <= N; i++)
	{
		if (!used[i])
		{
			pr.pb(i);
			for (ll j = i * i; j <= N; j += i)
				used[j] = true;
		}
	}
}
