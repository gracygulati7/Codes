//* destructuring
// const arr=[10,20,30,40]
// const[a,b=100,c,...res]=[10,20,30,40,50,60]
// console.log(a,b,c,res)

//* ... is spread operator 

// const arr=[1,2,3,4,5]
// const brr=[...arr,100,200,..."abc"]
// console.log(brr)

const person = {
    name : "weekend",
    age: "30"
}

// const {name:a,age:b ,city="nice"}=person  //* destructuring object and changing names of keys

// console.log(name,age,city,a,b)  //* error here as now we cant access name and age by these keys 
// //* as we have changed their names to a and b so now we can access it only by its new names

// console.log(city,a,b) // this would give desired results

const singer = {...person, city:"Delhi"} //* copying object by spread operator and adding new key value pair
console.log(singer)  

