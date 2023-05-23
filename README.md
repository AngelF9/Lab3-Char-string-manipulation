 # Lab 3: Char Mechanic

In this lab, you will learn how to:
- use `char` variables
- manipulate `string` variables

## Question 1: receipt.cpp

You work as a car mechanic and just finished serving a client. You are about to write the receipt, but you realize you don't have pen and paper. However, you do have a pair of scissors and a newspaper article laying around. You decide to cut the article into pieces and assemble a receipt from that.

For this question, you are **NOT ALLOWED TO INTRODUCE ANY LITERAL STRINGS OR CHARS** beyond what's already provided. In other words, don't use quotes. You are provided with the following in `receipt.cpp`:
```
string article =
    "The oil industry has seen its biggest growth since twenty fourteen. "
    "Don't miss your chance! - Kansas news";
```

**NOTE**: This is a multiline string. You can have `"string segments "` `"separated into multiple lines"` so that each line is not too long. The last line should end with a `;`.

Don't modify the `article` variable. Your goal is to use the following string manipulation methods **AT LEAST ONCE EACH** (`+`, `.at`, `[]`, `tolower`, `toupper`, `.substr`, `.erase`, `.insert`, `.replace`) to print out the following string:
```
Oil change. Forty bucks.
```

Here's an example to get you started. Below is one way to assemble the word "Oil" without using literal strings or chars:
```
// Starting from the 5th char in the article, the first 3 chars are "oil"
string word_1 = article.substr(4, 3);
// We convert the first char to uppercase to get "Oil"
word_1[0] = toupper(word_1[0]);
```

### Expected output

When you compile (`g++`) and run (`./a.out`) the program, your terminal should look exactly like this:
```
$ ./a.out 
Oil change. Forty bucks.
$
```

## Question 2: plate.cpp

One of your duties as a car mechanic is to issue custom car plates. Customers come, tell you the state they are from and their favourite number between 0 and 999. You then turn the state name into an abbreviation and append the given number to it. The state abbreviation is the first two letters of the state name, all uppercase. If the given number has less than 3 digits, add in leading zeros until it has 3 digits.

For example:
- State: `California`, number: `777` -> plate: `CA777`
- State: `Washington`, number: `12` -> plate `WA012`
- State: `Florida`, number: `0` -> plate: `FL000`

Follow the TODO instructions and complete `plate.cpp`.

**Hint**: You'll need to convert an `int` to a `string` (see below). Also, remember that you can create a `string` from a `char` - let's say `'1'`, 5 times - by doing `string(5, '1')` which would give you `"11111"`.

### Converting an `int` to a `string`

You can convert an `int` to a `string` by using `to_string(<int>)`. For example:
```
int number = 12345;
string number_to_string = to_string(number);
```
The value of `number_to_string` is `"12345"`.

### Example expected output

If you run your program and give it the inputs `Nevada` and `3`, your terminal should look exactly like:
```
$ ./a.out
Which state are you from?
Nevada
What is your favourite number between 0 and 999?
3
Your custom plate is NE003!
$
```

## Question 3: url.cpp

Your manager wants to make a few changes to your company's website, but the web developer just quit a few days ago. Knowing that you are taking "Intro to Programming" at CSUF, they assign you the following tasks:

1. *Make the website secure*. Your manager is satisfied as long as they see `https` at the beginning of the website URL, since apparently the 's' stands for "secure"...
    - [Optional] You can find more about URLs [here](https://www.ibm.com/docs/en/cics-ts/5.6?topic=concepts-components-url).

2. *Upgrade the website*. Your manager is satisfied as long as you add `v2` to the hostname of the URL.
    - For this assignment, the hostname is the part between `www.` and `.com`.

3. *Start tracking users*. Your manager is satisfied as long as they see `?utm_source=<source>` at the end of the URL, where `<source>` is replaced by wherever the user came from.
    - [Optional] This is called a [url parameter](https://support.google.com/google-ads/answer/6277564?hl=en).

This doesn't make any sense to you, but you decide to follow through. The worst part is: you don't even know what the current website URL is! Your manager promises to give it to you in the following form: `http://www.<hostname>.com`.

Follow the TODO instructions and complete `url.cpp`.

**Hint**: To insert something into a string `str` 5 characters from the end, you can do `str.insert(str.length() - 5, ...)`.

### Example expected output

If you run your program and give it the inputs `http://www.charmec.com` and `Yahoo`, your terminal should look exactly like:
```
$ ./a.out
What is the old url? (http://www.<hostname>.com)
http://www.charmec.com
Where did the user come from? (one word)
Yahoo
The new url is:
https://www.charmecv2.com?utm_source=yahoo
$
```
