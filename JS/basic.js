// append child, removechild


const product = {
  title: "Parker Jotter Standard CT Ball Pen (Black)",
  rating: 4,
  isDealOfTheDay: true,
  offer: 5,
  price: 270,
};

const profile = {
  username: "@shradhakhapra",
  isVerified: true,
  followers: BigInt("569K"),
  posts: 195,
  following: 4,
  isFollow: true,
  name: "Shradha Khapra",
  bio: "I am a software developer",
  text: "Entrepreneur",
};

let num = prompt("Enter a number: ");
if (num % 5 === 0) {
  console.log("Number is a multiple of 5");
} else {
  console.log("Number is not a multiple of 5");
}

let num1 = prompt("Enter your score: ");
if (num1 >= 90 && num1 <= 100) {
  console.log("Grade A");
} else if (num1 >= 70 && num1 <= 89) {
  console.log("Grade B");
} else if (num1 >= 60 && num1 <= 69) {
  console.log("Grade C");
} else if (num1 >= 50 && num1 <= 59) {
  console.log("Grade D");
} else if (num1 >= 0 && num1 <= 49) {
  console.log("Grade F");
}

let str = "JavaScript";
let size = 0;
for (let i of str) {
  console.log(i);
  size++;
}
console.log("string size is: ", size);

let student = {
  name: "Krishna",
  age: 20,
  cgpa: 8.0,
  isPass: true,
};
for (let i in student) {
  console.log("key: ", i, "values: ", student[i]);
}

let game = 25;
let n = prompt("Enter a number: ");
while (n != game) {
  if (n > game) {
    console.log("Number is too high");
  } else {
    console.log("Number is too low");
  }
  n = prompt("Enter a number: ");
}

let name1 = prompt("Enter your name: ");
let len = "@" + name1 + name1.length;
console.log(len);

arr = [250, 645, 300, 900, 50];
for (let i = 0; i < arr.length; i++) {
  let offer = arr[i] / 10;
  arr[i] -= offer;
}
console.log(arr);

function vowels(str) {
  let x = 0;
  for (let i = 0; i < str.length; i++) {
    if (
      str[i] === "a" ||
      str[i] === "e" ||
      str[i] === "i" ||
      str[i] === "o" ||
      str[i] === "u" ||
      str[i] === "A" ||
      str[i] === "E" ||
      str[i] === "I" ||
      str[i] === "O" ||
      str[i] === "U"
    ) {
      x++;
    }
  }
  return x;
}
vowels("Shradha");

const count = (str) => {
    let x = 0;
  for (let i = 0; i < str.length; i++) {
    if (
      str[i] === "a" ||
      str[i] === "e" ||
      str[i] === "i" ||
      str[i] === "o" ||
      str[i] === "u" ||
      str[i] === "A" ||
      str[i] === "E" ||
      str[i] === "I" ||
      str[i] === "O" ||
      str[i] === "U"
    ) {
      x++;
    }
  }
  return x;
}
count("Shradha");

let nums= [1,2,3,4,5]

// 1st method 
let sq = (num) => {
    return num*num;
};

nums.forEach(sq);

// 2nd method
nums.forEach((num) => {
    console.log(num*num);
})

let arr = [1,2,3,4,5];
const output = arr.reduce((res,val) => {
    return res+val;
});
console.log(output);


let newbtn= document.createElement('button');
newbtn.innertext= 'Click me';
newbtn.style.backgroundColor= 'red';
newbtn.style.color= 'white';
document.querySelector("body").prepend(newbtn);

