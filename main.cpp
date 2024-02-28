#include <iostream>
#include "ReportGeneratorFactory.h"

int main() {
    std::cout << "Choose report format (1 - PDF, 2 - Excel, 3 - HTML): ";
    int choice;
    std::cin >> choice;

    ReportGenerator* reportGenerator = nullptr;
    switch (choice) {
        case 1:
            reportGenerator = ReportGeneratorFactory::createReportGenerator(ReportFormat::PDF);
            break;
        case 2:
            reportGenerator = ReportGeneratorFactory::createReportGenerator(ReportFormat::EXCEL);
            break;
        case 3:
            reportGenerator = ReportGeneratorFactory::createReportGenerator(ReportFormat::HTML);
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
            return 1;
    }

    reportGenerator->generateReport();

    delete reportGenerator;

    return 0;
}
