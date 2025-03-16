### Hoa, Thường, Hoa thường.
```
string s = "nguyen thi huyen";
transform(s.begin(), s.end(), s.begin(), ::toupper);
transform(s.begin(), s.end(), s.begin(), ::toupper);
transform(s.begin(), s.end(), s.begin(), ::tolower);
cout<<s;
```