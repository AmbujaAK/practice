function display() {
  var roll = document.getElementById('text').value;
  var dept = document.getElementById('dept');
  var d = parseInt(document.getElementById('dept').value);
  res = "";
  var students = [
    ["Ambuj Kumar","74","IT"],
    ["Ritwick Dhibar","51","IT"],
    ["Rahul Tiwari","49","IT"],
    ["Manisha Mandal","43","IT"],
    ["Deepa Kumari","80","IT"],
    ["Choden Lama","67","IT"],
    ["Manish Kumar","71","IT"],
    ["Ritem Bera","21","INSTRUMENTATION"],
    ["Shrishty Kumari","10","PRINTING"],
    ["Priyanka Nag","22","PRINTING"],
    ["Aman Aggrawal","4","CONSTRUCTION"],
    ["Priya Kumari","25","POWER"],
    ["Prasant Rajput","26","POWER"],
    ["Pratyush","28","CONSTRUCTION"],
    ["Saurav","33","INSTRUMENTATION"],
  ];

  res += '<div>';
  for (var i=0;i<students.length;i++){
    if(roll == students[i][1]){
      res += '<p> Name :'+ students[i][0] + '</p>';
      res += '<p> Roll No. :'+ students[i][1] + '</p>';
      res += '<p> Department :'+ students[i][2] + '</p>';
    }
    else if (dept.options[dept.selectedIndex].text == students[i][2]) {
      res += '<p> Name :'+ students[i][0] + '</p>';
      res += '<p> Roll No. :'+ students[i][1] + '</p>';
      res += '<p> Department :'+ students[i][2] + '</p>';
    }
      document.getElementById('content').innerHTML = res;
  }
  res+='</div>';
}
