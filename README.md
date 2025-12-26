# Sales Performance Analyzer

A C++ command-line application designed to process, manage, and analyze sales data for teams. This tool simplifies the calculation of performance metrics across multiple months.

## 🚀 Features

- **Multi-User Data Entry:** Input names and sales figures for any number of salespeople.
- **Matrix-Based Storage:** Utilizes a 2D array (matrix) to efficiently organize sales data over a 4-month period.
- **Automated Calculations:** - Computes the average sales for each individual salesperson.
    - Calculates the overall global average for the entire sales team.
- **Formatted Reporting:** Displays a clean summary report of all processed data.

## 🛠️ Technical Specifications

This project was developed and tested using the following environment:

* **Operating System:** Windows 10
* **Processor:** AMD Ryzen 5 3500U (2.10 GHz)
* **Memory:** 16 GB RAM
* **Language:** C++
* **Compiler:** Standard GCC/G++

## ⚙️ How It Works

1.  **Setup:** The program prompts the user for the total number of salespeople to be evaluated.
2.  **Input:** For each salesperson, the user enters their name and their specific sales figures for four consecutive months.
3.  **Processing:** The system iterates through the matrix, summing the values for each row to find individual averages.
4.  **Results:** An "Overall Sales Report" is printed to the console, showing individual performance followed by the team's collective average.

## 📂 Installation and Usage

1.  **Clone the repository:**
    ```bash
    git clone [https://github.com/your-username/sales-performance-analyzer.git](https://github.com/your-username/sales-performance-analyzer.git)
    ```
2.  **Compile the source code:**
    ```bash
    g++ main.cpp -o SalesAnalyzer
    ```
3.  **Run the application:**
    ```bash
    ./SalesAnalyzer
    ```

## 📝 Example Output

```text
Enter the number of salespeople: 2

Enter the name of salesperson 1: John
  Sales for month 1: 1000
  Sales for month 2: 1200
  Sales for month 3: 1100
  Sales for month 4: 1300

=== SALES REPORT ===
Salesperson: John | Average Sales: 1150
...
Overall average sales for all salespeople: 1150

Developed by: Luis Fernando Agamez Atehortua
