const int N = 10000000;
int lp[N + 1];
vector<int> pr;

void LinearSieve()
{
	pr.reserve(N / 10);
	for (int i = 2; i <= N; i++)
	{
		if (lp[i] == 0)
		{
			lp[i] = i;
			pr.pb(i);
		}
		for (int j = 0; j < pr.size() && pr[j] <= lp[i] && i * pr[j] <= N; j++)
			lp[i * pr[j]] = pr[j];
	}
}
