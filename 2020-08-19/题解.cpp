func countSubstrings(s string) int {
    n:=len(s)
    if n==0{
        return 0
    }
    res:=0
    for i:=0;i<2*n-1;i++{
        l:=i/2
        r:=l+i%2
        for l>=0&&r<n&&s[l]==s[r]{
            l--
            r++
            res++
        }
    }
    return res
}
