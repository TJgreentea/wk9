
#ifndef INVOICE_H
#define INVOICE_H

#include <string>

class Invoice {
public:
    Invoice(const std::string& id) : invoiceId(id), dollarsOwed(0) {}
    void addServiceCost(int costDollars) {
        if (costDollars > 0) {
            dollarsOwed += costDollars;
        }
    }
    int getDollarsOwed() const { return dollarsOwed; }
    std::string getInvoiceId() const { return invoiceId; }

private:
    std::string invoiceId;
    int dollarsOwed;
};

#endif // INVOICE_H
