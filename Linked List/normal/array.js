let arr=[1,2,3,4,5];


// console.log(arr[1])


for(let i=0;i<arr.length;i++){
    console.log("array",+arr[i]);
}

let arr1=arr;

for(let i=0;i<arr1.length;i++){
    console.log("array1",arr1[i]);
}

arr.push(6);
arr.push(7);
arr.push(8);
arr.push(9);

for(let i=0;i<arr1.length;i++){
    console.log(arr1[i]);
}

console.log(arr1===arr);

