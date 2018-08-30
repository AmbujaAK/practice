import java.io.*;
import java.util.Stack;

class Braces
{
	public static void main(String[] args) throws IOException
	{
		BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine());
		while(t-->0)
		{
			boolean res = true;
			Stack<Character> stack = new Stack<Character>();
			char[] s = br.readLine().toCharArray();
			for(char c:s)
			{
				if(c=='{'||c=='['||c=='(')
					stack.push(c);
				else if(stack.empty())
                {
                    res=false;
                    break;
                }
				else
				{
					if(c=='}')
					{
						if(stack.pop()!='{')
						{
							res=false;
							break;
						}
					}
					if(c==']')
					{
						if(stack.pop()!='[')
						{
							res=false;
							break;
						}
					}
					if(c==')')
					{
						if(stack.pop()!='(')
						{
							res=false;
							break;
						}
					}
				}
			}
			if(!stack.empty())
			    res=false;
			if(res)
				System.out.println("balanced");
			else
				System.out.println("not balanced");
        }
	}
}