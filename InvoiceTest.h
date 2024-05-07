
#ifndef INVOICETEST_H
#define INVOICETEST_H

#include <iostream>
#include "Invoice.h"

class InvoiceTest {
public:
    void runTests() {
        testAddServiceCost();
    }

private:
    void testAddServiceCost() {
        Invoice invoice("ABC123");
        invoice.addServiceCost(100);
        if (invoice.getDollarsOwed() != 100) {
            std::cout << "Test failed: Service cost addition incorrect." << std::endl;
        }
    }
};

#endif // INVOICETEST_H
