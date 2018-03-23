function display() {
  var roll = document.getElementById('text').value;
  var dept = document.getElementById('dept');
  var d = parseInt(document.getElementById('dept').value);
  res = "";
  var students = [
    ["Ambuj Kumar","74","IT"],
    ["Ritwic Dhibar","51","IT"],
    ["Rahul Tiwari","49","IT"],
    ["Manisha Mandal","43","IT"],
    ["Deepa Kumari","80","IT"],
    ["Choden Lama","67","IT"],
    ["Ritem Bera","21","INSTRUMENTATION"],
    ["Shrishty Kumari","22","PRINTING"],
    ["Priyanka Nag","23","PRINTING"],
    ["Aman Aggrawal","4","CONSTRUCTION"],
    ["Priya Kumari","25","POWER"],
    ["Prasant Rajput","26","POWER"],
    ["Pratysh","28","CONSTRUCTION"],
    ["Saurav","33","INSTRUMENTATION"],
  ];
  //var size = 7;
  //console.log(size);
  s_list = [];
  res += '<ul>';
  //var flag;
  for (var i=0;i<students.length;i++){
    if(roll == students[i][1]){
      //flag = 1;
      res += '<li> <h6> Name :'+ students[i][0] + '<h6></li>';
      res += '<li> <h6> Roll No. :'+ students[i][1] + '<h6></li>';
      res += '<li> <h6> Department :'+ students[i][2] + '<h6></li>';
    }
    else if (dept.options[dept.selectedIndex].text == students[i][2]) {
      console.log(dept.options[dept.selectedIndex].tex);
      //flag = 1;
      res += '<li> <h6> Name :'+ students[i][0] + '<h6></li>';
      res += '<li> <h6> Roll No. :'+ students[i][1] + '<h6></li>';
      res += '<li> <h6> Department :'+ students[i][2] + '<h6></li>';
    }
      document.getElementById('content').innerHTML = res;
    //s_list.push(res);
    //s_list.push(students[i]);
  }
  res+='</ul>';
  console.log(s_list);
/*
  for (var i=0;i<students.length;i++){
    if(roll == students[i][1]){
      document.getElementById('content').innerHTML = s_list[i];
      break;
    }
    else {
      document.getElementById('content').innerHTML = 'No Data Available';
    }
  }
  */
}
