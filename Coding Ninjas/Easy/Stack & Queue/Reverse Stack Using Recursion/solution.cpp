//https://www.codingninjas.com/studio/problems/reverse-stack-using-recursion_631875
//https://phitron.io/ph453/video/ph453-15-6-reverse-stack-using-recursion-codingninjas-
void reverseStack(stack<int> &s) {
    // Write your code here
    if(s.empty()) return;
    int x = s.top();
    s.pop();

    reverseStack(s);

    stack<int> news;
    while(!s.empty())
    {
        news.push(s.top());
        s.pop();
    }
    news.push(x);
    while(!news.empty())
    {
        s.push(news.top());
        news.pop();
    }
}