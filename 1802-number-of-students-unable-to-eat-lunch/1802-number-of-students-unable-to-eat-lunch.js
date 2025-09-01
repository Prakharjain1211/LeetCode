/**
 * @param {number[]} students
 * @param {number[]} sandwiches
 * @return {number}
 */
var countStudents = function(students, sandwiches) {
    let size = students.length;
    let newsize = 0;  
    while(size != newsize)
    {
        newsize = size;
        for(let i=0; i<size;i++)
        {
            if(students[0]!=sandwiches[0])
            {
                students.push(students.shift());
            }
            else
            {
                students.shift();
                sandwiches.shift(); 
                size = students.length;
                break;               
            }
        }
        size = students.length;
    }
    return students.length;
};