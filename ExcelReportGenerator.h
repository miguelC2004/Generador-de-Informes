#ifndef EXCEL_REPORT_GENERATOR_H
#define EXCEL_REPORT_GENERATOR_H

#include "ReportGenerator.h"

class ExcelReportGenerator : public ReportGenerator {
public:
    void generateReport() override {
        std::cout << "Generating Excel report" << std::endl;
    }
};

#endif // EXCEL_REPORT_GENERATOR_H
