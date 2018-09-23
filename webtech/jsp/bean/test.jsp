<jsp:useBean id="fact" class="bean.Factorial" scope="page"/>
<jsp:setProperty name="fact" property="value" value="5"/>
<jsp:getProperty name="fact" property="value"/>
