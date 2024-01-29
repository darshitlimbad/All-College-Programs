
    for(int i=0 ; i<mid_index ; i++)    {
        cout << st.stack[st.top] << endl;
        arr[i] = st.stack[st.top];
        st.pop();
    }
    st.pop();

    for(int i=mid_index-1 ; i>=0; i--)  {
        st.push(arr[i]);
    }
}