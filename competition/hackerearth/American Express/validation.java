//package com.he.formValidation;

import java.io.IOException;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class CommentServlet extends HttpServlet {
	
	@Override
	protected void doGet(HttpServletRequest request, HttpServletResponse response) 
    {
            try {
				request.getRequestDispatcher("/WEB-INF/jsp/comment.jsp").forward(request, response);
			} catch (ServletException | IOException e) {
				e.printStackTrace();
			}
	}
	
	//TODO
	protected void doPost(HttpServletRequest request, HttpServletResponse response)
    throws ServletException, java.io.IOException {
	        response.setContentType("text/html");
	        //PrintWriter out = response.getWriter();
	        java.io.PrintWriter out = response.getWriter();
	        //int gender = -1 ;
	        String nameRegex = "^[a-zA-Z]*$";
	        String emailRegex = "^[a-zA-Z0-9_+&*-]+(?:\\.[a-zA-Z0-9_+&*-]+)*@(?:[a-zA-Z0-9-]+\\.)+[a-zA-Z]{2,7}$";
	        String urlRegex = "^((((https?|ftps?|gopher|telnet|nntp)://)|(mailto:|news:))(%[0-9A-Fa-f]{2}|[-()_.!~*';/?:@&=+$,A-Za-z0-9])+)([).!';/?:,][[:blank:]])?$";
	        try {
	            String name = request.getParameter("name");
	            String email = request.getParameter("email");
	            String url = request.getParameter("url");
	            //gender = Integer.parseInt(request.getParameter("gender"));
	            String gender = request.getParameter("gender");
	            
	            String invalidName = request.getParameter("invalidName");
	            String invalidEmail = request.getParameter("invalidEmail");
	            String invalidWebsite = request.getParameter("invalidWebsite");
	            String invalidGender = request.getParameter("invalidGender");
	            
	            if(name != null){
	                if(!name.matches(nameRegex)){
	                    request.setAttribute("invalidName" , "Please enter a valid name");
	                    request.getRequestDispatcher("/WEB-INF/jsp/comment.jsp").forward(request, response);
	                }
	            }else{
	                request.setAttribute("invalidName" , null);
	                request.getRequestDispatcher("/WEB-INF/jsp/comment.jsp").forward(request, response);
	            }
	            if(email == null){
	                request.setAttribute("invalidEmail" , null);
	                request.getRequestDispatcher("/WEB-INF/jsp/comment.jsp").forward(request, response);
	            }else if(!email.matches(emailRegex)){
	                request.setAttribute("invalidEmail" , "Please enter a valid email");
	                request.getRequestDispatcher("/WEB-INF/jsp/comment.jsp").forward(request, response);
	            }
	            if(url == null){
	                request.setAttribute("invalidWebsite" , null);
	                request.getRequestDispatcher("/WEB-INF/jsp/comment.jsp").forward(request, response);
	            }else if(!url.matches(urlRegex)){
	                request.setAttribute("invalidWebsite" , "Please enter a valid URL");
	                request.getRequestDispatcher("/WEB-INF/jsp/comment.jsp").forward(request, response);
	            }
	            if(gender == null){
	                request.setAttribute("invalidGender" , "Please select a gender");
	                request.getRequestDispatcher("/WEB-INF/jsp/comment.jsp").forward(request, response);
	            }
	        } catch (ServletException | IOException e) {
				e.printStackTrace();
			} 
	}
}
