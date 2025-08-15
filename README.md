# 📚 Library Management System (C++)

A simple **console-based C++ application** to manage library books. Allows you to add, search, issue, and return books. Perfect for beginners to learn **C++ basics**, **structs**, **vectors**, and **menu-driven programs**.

---

## 🚀 Features

* ➕ **Add** a new book
* 📋 **Display** all books
* 🔍 **Search** a book by ID
* 📤 **Issue** a book
* 📥 **Return** a book
* 🚪 **Exit** the application

---

## 🛠️ Technologies Used

* **C++** (GCC/G++ Compiler)
* **VS Code** (for coding and running)
* **Git & GitHub** (for version control)

---

## 📁 Folder Structure

```
library-management-system/
│
├── src/
│   ├── library.cpp        # Main C++ program file
│
├── README.md
└── .gitignore
```

---

## 🧩 Setup Instructions (VS Code)

### 1️⃣ Install Required Tools

* [GCC/G++ Compiler (MinGW for Windows)](https://www.mingw-w64.org/)
* [VS Code](https://code.visualstudio.com/)
* **C/C++ Extension Pack** in VS Code
* [Git](https://git-scm.com/)

---

### 2️⃣ Verify Installations

Open your terminal and run:

```bash
g++ --version
git --version
```

---

## 🖥️ How to Run the Project

### 1️⃣ Create Folder Structure

```
library-management-system/
├── src/
```

---

### 2️⃣ Add Code

* Save the given `library.cpp` file inside the `src/` folder.

---

### 3️⃣ Compile and Run

In the terminal, from the **src** folder:

```bash
g++ library.cpp -o library
./library
```

If running from project root, specify the file path:

```bash
cd src
g++ library.cpp -o library
./library
```

---

## ⬆️ How to Push Code to GitHub

### 1️⃣ Create a New Repository on GitHub

* Go to **GitHub → New Repository** → Name: `library-management-system`

---

### 2️⃣ Initialize Git and Push

From your project root folder:

```bash
git init
git add .
git commit -m "Initial commit - Library Management System"
git branch -M main
git remote add origin https://github.com/your-username/library-management-system.git
git push -u origin main
```

---

## 📌 Future Enhancements

* 💾 File storage to save book data permanently
* 📊 Search books by title or author
* 🗄️ Database integration (MySQL/SQLite)
* 🛡️ Input validation and improved error handling

---

## 🙌 Author

Created by **Pratiksha** – 2nd Year AIML Student, Reva University
GitHub: [pratikshadk12](https://github.com/pratikshadk12)

---

## ⚠️ .gitignore Recommendation

Add a `.gitignore` file to exclude compiled files:

```
# Compiled binary
library.exe
library
```

---

Happy Reading! 📖✨

---

