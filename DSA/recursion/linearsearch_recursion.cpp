#include<bits/stdc++.h>
using namespace std;
bool linearsearch(vector<int>&arr, int index, int k){
    if(arr[index]==k){
        return true;
    }
    if(index == arr.size()){
        return false;
    }
    return linearsearch(arr,index+1,k);
}

int main(){
    vector<int>arr = {3,5,1,2,6};
    int k =7;

    if(linearsearch(arr,0,k)){
        cout<<"Present";
    }else{
        cout<<"Absent";
    }
}
/* THEORY FOR REVISION

Here's a **revision note** you can read in **2–3 minutes** whenever you forget.

---

# 📌 Recursion on Arrays vs Vectors (Revision)

## 1. Array as Function Parameter

### Declaration

```cpp
bool linearSearch(int arr[], int size, int k)
```

is exactly the same as

```cpp
bool linearSearch(int *arr, int size, int k)
```

> Inside a function, **arrays decay into pointers**.

---

## 2. What is Actually Passed?

Suppose

```cpp
int arr[5] = {3,5,1,2,6};
```

Calling

```cpp
linearSearch(arr,5,6);
```

is internally like

```cpp
linearSearch(&arr[0],5,6);
```

Only the **address of the first element** is passed.

The entire array is **NOT copied**.

---

## 3. Memory Example

```
Address     Value

100  -----> 3
104  -----> 5
108  -----> 1
112  -----> 2
116  -----> 6
```

Initially

```
arr = 100
```

---

## 4. Meaning of arr + 1

```
arr
 ↓
3 5 1 2 6
^
```

After

```cpp
arr + 1
```

```
3 5 1 2 6
  ^
```

The pointer moves to the next element.

Nothing is deleted.

---

## 5. Why size-1?

```cpp
linearSearch(arr+1, size-1, k);
```

Because

* first element is skipped
* remaining elements become one less

Example

```
3 5 1 2 6
size = 5
```

↓

```
5 1 2 6
size = 4
```

↓

```
1 2 6
size = 3
```

↓

```
2 6
size = 2
```

↓

```
6
size = 1
```

---

## 6. Base Case

```cpp
if(size == 0)
    return false;
```

Means

"No elements left."

---

## 7. Search Logic

```cpp
if(arr[0] == k)
    return true;

return linearSearch(arr+1, size-1, k);
```

Check first element.

If not found,

search remaining array.

---

# 📌 Recursion Using Vector

## Best Method

```cpp
bool linearSearch(vector<int>& arr, int index, int k)
```

Notice

```
&
```

Pass by reference.

No copy is created.

---

## Working

```
index = 0

3 5 1 2 6
^
```

↓

```
index = 1

3 5 1 2 6
  ^
```

↓

```
index = 2

3 5 1 2 6
    ^
```

↓

Continue...

Only **index changes**.

Vector remains the same.

---

## Base Case

```cpp
if(index == arr.size())
    return false;
```

Means

"We have checked every element."

---

## Search Logic

```cpp
if(arr[index] == k)
    return true;

return linearSearch(arr,index+1,k);
```

---

# Array vs Vector

| Array                   | Vector                 |
| ----------------------- | ---------------------- |
| `arr+1` moves pointer   | `index+1` moves index  |
| Passes address          | Passes reference (`&`) |
| Size passed separately  | `arr.size()` available |
| Uses pointer arithmetic | Uses indexing          |
| Memory unchanged        | Memory unchanged       |

---

# Time Complexity

Both approaches

```
Time  : O(n)
Space : O(n)    // recursion stack
```

---

# Important Interview Points ⭐

### Array parameter

```cpp
void fun(int arr[]);
```

=

```cpp
void fun(int *arr);
```

---

### `arr+1`

Moves the pointer to the next element.

It **does not** remove an element.

---

### Vector

Always prefer

```cpp
vector<int>& arr
```

instead of

```cpp
vector<int> arr
```

because passing by value copies the whole vector.

---

# Easy Way to Remember

### Array

```
Pointer moves

3 5 1 2 6
^

↓

3 5 1 2 6
  ^
```

### Vector

```
Index moves

index = 0

3 5 1 2 6
^

↓

index = 1

3 5 1 2 6
  ^
```

## 🧠 One-Line Memory Trick

* **Array recursion** = **Move the pointer** (`arr + 1`).
* **Vector recursion** = **Move the index** (`index + 1`).
* In both cases, **the original data never changes**—only your "current position" changes.






*/