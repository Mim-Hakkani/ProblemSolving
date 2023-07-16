// function isLSeven(input){
//  if(input<7){
//     return input-7;
//  }
//  else{
//     return input*2;
//  }
// }

// const output1 = isLSeven(6)
// const output2 = isLSeven(-15)
// const output3 = isLSeven(15)
// console.log(output1);
// console.log(output2);
// console.log(output3);


// function findingBadData(arr,count){
// for(let i = 0;i<arr.length;i++){
//     if(arr[i]<0){
//         count++;
//     }
// }

// return count
// }

// let count = 0;
// const arr = [ -4, -9, -5, -33, -55];
// const totalBadCount = findingBadData(arr,count);
// console.log(totalBadCount);

// তোমাকে একটা function দেওয়া হবে called gemsToDiamond(). এটা ইনপুট হিসেবে তিনটা number ( তোমাদের ৩ বন্ধুর gems এর সংখ্যা ) নিবে। 



// ১ম বন্ধুর প্রতি gems এর ক্ষমতা = 21

// ২য় বন্ধুর প্রতি gems এর ক্ষমতা = 32

// ৩য় বন্ধুর প্রতি gems এর ক্ষমতা = 43



// [ gems এর ক্ষমতা বলতে একটা gems কে কয়টা diamond এ convert করা যাবে সেটা বুঝানো হচ্ছে। ]

// এখন তোমার task: সব বন্ধুর gems মিলিয়ে total কতটি diamond পাবে সেটা বের করতে হবে। total diamond এর সংখ্যা যদি 1000 এর দিগুন এর উপর হয়ে যায় সেক্ষেত্রে total diamond থেকে 2000 বাদ দিয়ে যতগুলো diamond অবশিষ্ট থাকবে, ততগুলো তোমরা পাবে।

// Sample Input & Output:-



// Input: 1, 1, 1

// Output: 96



// Input: 20, 200, 50

// Output: 6970



// Input: 100, 5, 1

// Output: 303

// function gemsToDiamond(gym1,gym2,gym3){
 
//     let gymCountFirstFriend =21*gym1; 
//     let gymCountSecondFriend =32*gym2; 
//     let gymCountThirdFriend =43*gym3; 

//     const totalDiamond = gymCountFirstFriend + gymCountSecondFriend+gymCountThirdFriend;
//     if(totalDiamond<2000){
//         return totalDiamond;
//     }
//     else{
//         return totalDiamond -2000;
//     }

// }

// const totalDiamond = gemsToDiamond(100,5,1);
// console.log('Output:: ',totalDiamond);


// তোমাকে একটা function দেওয়া হবে called evenOdd(). এটা ইনপুট হিসেবে একটা string নিবে। 



// এখন তোমার task: String এ total কয়টা character আছে তার উপর ভিত্তি করে আউটপুট দিতে হবে। আউটপুট হবে ‘even’ অথবা ‘odd’ ।Sample Input & Output:



// Input: ‘Phero’

// Output: odd



// Input: ‘Batch7’

// Output: even



// Input: ‘chatgpt’

// Output: odd


function evenOdd(name){
  const length = name.length;

  if(length%2==0){
    console.log("Output :: even"); 
  }
  else {
    console.log("Output :: odd"); 
  }
}

const inputString = "Phero";
evenOdd(inputString)

