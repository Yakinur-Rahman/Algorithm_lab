sort(t.begin(), t.end());
sort(s.begin(), s.end());

for (int i = 0; i < s.size(); i++)
{
    if (s[i] != t[i])
    {
        return t[i];
    }
}
return t[t.size() - 1];
